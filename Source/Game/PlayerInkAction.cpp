#include "Game/BulletBombBase.hpp"
#include "Game/BulletBombInstant.hpp"
#include "Game/BulletCloneHandle.hpp"
#include "Game/BulletMgr.hpp"
#include "Game/CloneObjMgr.hpp"
#include "Game/MainMgrBase.hpp"
#include "Game/Player.hpp"
#include "Game/PlayerInkAction.hpp"
#include "Game/PlayerParam.hpp"

namespace Game
{
    void PlayerInkAction::shotBombInstant()
    {
        Player::PlayerControlType controlType = player->controlType;

        sead::Vector3<float> position;
        sead::Vector3<float> velocity;
        sead::Vector3<float> direction;

        direction.x = 0.0f;
        direction.y = 0.6f;

        Cmn::WeaponData* weaponData = getShotVel_BombStd();
        if (weaponData->field_0xf4 == 8)
            direction.z = 2.8f;
        else
            direction.z = player->playerParam->field_0x50;

        bool unk1 = false;
        if ((controlType == Player::PlayerControlType::Local) && (player->isRemoteControlled == false))
        {
            unk1 = true;
        }
        WeaponTypeAddMove weaponType = WeaponTypeAddMove::Unknown;
        calcShotPosVel(-80.0, 0.0, 50.0, &position, &velocity, nullptr, &direction, &weaponType, unk1, 0, 0);
        if (velocity.y < -1.0)
        {
            float u0 = -1.0 / velocity.y;
            velocity.x *= u0;
            velocity.y *= u0;
            velocity.z *= u0;
        }
        BulletMgr::BulletType type = static_cast<BulletMgr::BulletType>(MainMgrBase::sInstance->bulletMgr->actorTypeTableByIndex[BulletBombInstant::sActorTypeIndex]);
        if (type != BulletMgr::BulletType::Invalid)
        {
            BulletBombBase* bullet = reinterpret_cast<BulletBombBase*>(MainMgrBase::sInstance->bulletMgr->activateOneCancelUnnecessary(type,true,&position,&velocity));
            {
                if(bullet)
                {
                    uint32_t playerIndex = player->playerIndex;
                    uint32_t cloneHandleSize = CloneObjMgr::sInstance->bulletCloneHandleArray.size;
                    BulletCloneHandle* bulletCloneHandle = nullptr;

                    if(playerIndex < cloneHandleSize)
                    {
                        bulletCloneHandle = reinterpret_cast<BulletCloneHandle**>(CloneObjMgr::sInstance->bulletCloneHandleArray.pointer)[playerIndex];
                    }

                    bulletCloneHandle->sendEvent_ShotBombInstant(playerIndex,&position,&velocity);
                    uint32_t seed = getRandomSeed();
                    bullet->initializeSender(player, playerIndex, playerIndex, &position, &velocity, seed);
                    player->startMotion_BombThrow(0, 1);
                    setInkLock(0x28, true, true);
                }
            }
        }
    }
}

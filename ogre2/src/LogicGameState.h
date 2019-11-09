
#ifndef _Xyz_MyGameState_H_
#define _Xyz_MyGameState_H_

#include "OgrePrerequisites.h"
#include "BaseGameState.h"

namespace Xyz
{
    class LogicSystem;
    struct GameEntity;
    struct MovableObjectDefinition;

    class LogicGameState : public GameState
    {
        float               mDisplacement;
        GameEntity              *mCubeEntity;
        MovableObjectDefinition *mCubeMoDef;

        LogicSystem         *mLogicSystem;

    public:
        LogicGameState();
        ~LogicGameState();

        void _notifyLogicSystem( LogicSystem *logicSystem )     { mLogicSystem = logicSystem; }

        virtual void createScene01(void);
        virtual void update( float timeSinceLast );
    };
}

#endif

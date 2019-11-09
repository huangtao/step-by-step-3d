
#ifndef _Xyz_EmptyProjectGameState_H_
#define _Xyz_EmptyProjectGameState_H_

#include "OgrePrerequisites.h"
#include "TutorialGameState.h"

namespace Xyz
{
	class EmptyProjectGameState : public TutorialGameState
    {
        Ogre::SceneNode     *mSceneNode;
        float               mDisplacement;

        virtual void generateDebugText( float timeSinceLast, Ogre::String &outText );

    public:
		EmptyProjectGameState( const Ogre::String &helpDescription );

        virtual void createScene01(void);

        virtual void update( float timeSinceLast );

        virtual void keyReleased( const SDL_KeyboardEvent &arg );
    };
}

#endif

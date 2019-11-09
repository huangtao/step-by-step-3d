
#ifndef _Xyz_GraphicsGameState_H_
#define _Xyz_GraphicsGameState_H_

#include "OgrePrerequisites.h"
#include "BaseGameState.h"

namespace Xyz
{
	class GraphicsGameState : public BaseGameState
    {
        Ogre::SceneNode     *mSceneNode;
        float               mDisplacement;

        virtual void generateDebugText( float timeSinceLast, Ogre::String &outText );

    public:
		GraphicsGameState( const Ogre::String &helpDescription );

        virtual void createScene01(void);

        virtual void update( float timeSinceLast );

        virtual void keyReleased( const SDL_KeyboardEvent &arg );
    };
}

#endif

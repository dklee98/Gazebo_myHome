#include <gazebo/gazebo.hh>

namespace gazebo
{
	class WorldPluginMyHome : public WorldPlugin
	{
		public: WorldPluginMyHome() : WorldPlugin()
			{
			  printf("Welcome to Dong's World!\n");
			}
		public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
			{
			}
	};
	GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyHome)
}

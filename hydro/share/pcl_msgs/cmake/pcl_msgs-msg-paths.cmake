# generated from genmsg/cmake/pkg-msg-paths.cmake.em

# message include dirs in installspace
_prepend_path("${pcl_msgs_DIR}/.." "msg" pcl_msgs_MSG_INCLUDE_DIRS UNIQUE)
set(pcl_msgs_MSG_DEPENDENCIES sensor_msgs;std_msgs)

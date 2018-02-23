#pragma once

#include <quadrotor_common/trajectory.h>

namespace trajectory_generation_helper
{

namespace heading
{

void addConstantHeadingRate(const double initial_heading,
                            const double final_heading,
                            quadrotor_common::Trajectory* trajectory);

} // namespace heading

} // namespace trajectory_generation_helper

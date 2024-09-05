
/*
 * This file is autogenerated. Do not edit manually.
 */
#include "kernelj.hpp"
#include "tier8.hpp"

ArrayJ Tier8::smooth_labels(DeviceJ * device, ArrayJ * src, ArrayJ * dst, int radius)
{
    return ArrayJ{cle::tier8::smooth_labels_func(device->get(), src->get(), dst == nullptr ? nullptr : dst->get(), radius)};
}

ArrayJ Tier8::smooth_connected_labels(DeviceJ * device, ArrayJ * src, ArrayJ * dst, int radius)
{
    return ArrayJ{cle::tier8::smooth_connected_labels_func(device->get(), src->get(), dst == nullptr ? nullptr : dst->get(), radius)};
}


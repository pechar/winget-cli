// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
#pragma once
#include "Microsoft/Schema/1_0/OneToOneTable.h"


namespace AppInstaller::Repository::Microsoft::Schema::V1_0
{
    namespace details
    {
        using namespace std::string_view_literals;

        struct ChannelTableInfo
        {
            inline static constexpr std::string_view TableName() { return "channels"sv; }
            inline static constexpr std::string_view ValueName() { return "channel"sv; }
        };
    }

    // The table for Channel.
    using ChannelTable = OneToOneTable<details::ChannelTableInfo>;
}

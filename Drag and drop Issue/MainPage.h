// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
#pragma once

#include "MainPage.g.h"

namespace winrt::SimpleIslandApp::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage() = default;

        void Page_Loaded(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
        void ViewModel_PointerPressed(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Input::PointerRoutedEventArgs const& e);
        void DragCompleted(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> asyncInfo, Windows::Foundation::AsyncStatus asyncStatus);

    private:
        Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackageOperation> mDragOperation;
    public:
        void tree_PointerMoved(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::Input::PointerRoutedEventArgs const& e);
    };
}

namespace winrt::SimpleIslandApp::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}

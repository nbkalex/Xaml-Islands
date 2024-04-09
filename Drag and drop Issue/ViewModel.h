#pragma once

#include "ViewModel.g.h"

namespace winrt::SimpleIslandApp::implementation
{
    struct ViewModel : ViewModelT<ViewModel>
    {
        ViewModel();

        void OnDragEnter(Microsoft::UI::Xaml::DragEventArgs e)
        {
            
        }

        void OnDragOver(Microsoft::UI::Xaml::DragEventArgs e)
        {
            
        }

        void OnDrop(Microsoft::UI::Xaml::DragEventArgs e)
        {
            
        }
    };
}

namespace winrt::SimpleIslandApp::factory_implementation
{
    struct ViewModel : ViewModelT<ViewModel, implementation::ViewModel>
    {
    };
}

// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
#include "pch.h"

#include "MainPage.h"
#include "MyItem.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Windows::ApplicationModel::DataTransfer;
using namespace Microsoft::UI::Input;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;
using namespace Microsoft::UI::Xaml::Input;
using namespace Microsoft::UI::Xaml::Controls::Primitives;

namespace winrt::SimpleIslandApp::implementation
{
    void MainPage::Page_Loaded(winrt::Windows::Foundation::IInspectable const&, RoutedEventArgs const&)
    {
        auto items = winrt::single_threaded_observable_vector<SimpleIslandApp::MyItem>();
        auto root1 = winrt::make_self<winrt::SimpleIslandApp::implementation::MyItem>(L"root 1");
        auto root2 = winrt::make_self<winrt::SimpleIslandApp::implementation::MyItem>(L"root 2");
        auto root3 = winrt::make_self<winrt::SimpleIslandApp::implementation::MyItem>(L"root 3");
        auto root4 = winrt::make_self<winrt::SimpleIslandApp::implementation::MyItem>(L"root 4");
        auto root5 = winrt::make_self<winrt::SimpleIslandApp::implementation::MyItem>(L"root 5");

        root1->Children().Append(*make_self<SimpleIslandApp::implementation::MyItem>(L"Child 1 1"));
        root1->Children().Append(*make_self<SimpleIslandApp::implementation::MyItem>(L"Child 1 2"));
        root1->Children().Append(*make_self<SimpleIslandApp::implementation::MyItem>(L"Child 1 3"));
        root1->Children().Append(*make_self<SimpleIslandApp::implementation::MyItem>(L"Child 1 4"));

        root2->Children().Append(*make_self<SimpleIslandApp::implementation::MyItem>(L"Child 2 1"));
        root2->Children().Append(*make_self<SimpleIslandApp::implementation::MyItem>(L"Child 2 2"));
        root2->Children().Append(*make_self<SimpleIslandApp::implementation::MyItem>(L"Child 2 3"));
        root2->Children().Append(*make_self<SimpleIslandApp::implementation::MyItem>(L"Child 2 4"));

        items.Append(*root1);
        items.Append(*root2);
        items.Append(*root3);
        items.Append(*root4);
        items.Append(*root5);

        tree().ItemsSource(items);
    }
}





#pragma once

#include "MyItem.g.h"
#include "winrt/SimpleIslandApp.h"

namespace winrt::SimpleIslandApp::implementation
{
    struct MyItem : MyItemT<MyItem>
    {
        MyItem(hstring name) { mName = name; };
        hstring Name() { return mName; }

        Windows::Foundation::Collections::IObservableVector<winrt::SimpleIslandApp::MyItem> Children() { return mChildren; }

    private:
        Windows::Foundation::Collections::IObservableVector<winrt::SimpleIslandApp::MyItem> mChildren =
            winrt::single_threaded_observable_vector<winrt::SimpleIslandApp::MyItem>();
        hstring mName;
    };
}

namespace winrt::SimpleIslandApp::factory_implementation
{
    struct MyItem : MyItemT<MyItem, implementation::MyItem>
    {
    };
}

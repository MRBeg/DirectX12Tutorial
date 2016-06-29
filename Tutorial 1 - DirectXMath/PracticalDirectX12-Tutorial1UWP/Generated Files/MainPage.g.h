﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------


namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class StackPanel;
                ref class TextBlock;
                ref class InkCanvas;
            }
        }
    }
}
namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Shapes {
                ref class Path;
                ref class Line;
            }
        }
    }
}

namespace PracticalDirectX12_Tutorial1UWP
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class MainPage : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector,
        public ::Windows::UI::Xaml::Markup::IComponentConnector2
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
        virtual ::Windows::UI::Xaml::Markup::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ target);
    
    private:
        bool _contentLoaded;
    
        private: ::Windows::UI::Xaml::Controls::StackPanel^ HeaderPanel;
        private: ::Windows::UI::Xaml::Shapes::Path^ anglePath;
        private: ::Windows::UI::Xaml::Shapes::Line^ v1Line;
        private: ::Windows::UI::Xaml::Shapes::Line^ v2Line;
        private: ::Windows::UI::Xaml::Shapes::Line^ v3Line;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ v1Text;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ v2Text;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ v3Text;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ CalculationsText;
        private: ::Windows::UI::Xaml::Controls::InkCanvas^ inkCanvas;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ Header;
    };
}

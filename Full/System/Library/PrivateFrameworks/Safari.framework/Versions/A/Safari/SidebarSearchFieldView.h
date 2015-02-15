/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSView.h>

@protocol SidebarSearchFieldViewDelegate;
@class NSSearchField;

@interface SidebarSearchFieldView : NSView {

	id<SidebarSearchFieldViewDelegate> _delegate;
	NSSearchField* _searchField;
	id _accessibilityOverrideParent;

}

@property (assign,nonatomic,__weak) id<SidebarSearchFieldViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSearchField * searchField;                                   //@synthesize searchField=_searchField - In the implementation block
@property (assign,nonatomic,__weak) id accessibilityOverrideParent;                           //@synthesize accessibilityOverrideParent=_accessibilityOverrideParent - In the implementation block
+(id)createSearchFieldSidebarTableRowViewWithIdentifier:(id)arg1 ;
-(NSSearchField *)searchField;
-(id)accessibilityOverrideParent;
-(void)setAccessibilityOverrideParent:(id)arg1 ;
-(void)_searchStringDidChange:(id)arg1 ;
-(void)setDelegate:(id<SidebarSearchFieldViewDelegate>)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id<SidebarSearchFieldViewDelegate>)delegate;
@end


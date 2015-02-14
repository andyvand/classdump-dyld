/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/SidebarTableCellView.h>

@class SharedLinksProfileImageButton, NSImageView, NSTextField, NSString, NSImage;

@interface SharedLinksTableCellView : SidebarTableCellView {

	SharedLinksProfileImageButton* _profileImageButton;
	NSImageView* _socialServiceIconImageView;
	NSTextField* _displayNameTextField;
	NSTextField* _postTextField;
	NSTextField* _retweetedByTextField;
	char _displayNameTextFieldNeedsResize;
	char _retweetedByTextFieldNeedsResize;

}

@property (nonatomic,readonly) NSString * itemDisplayName; 
@property (nonatomic,readonly) NSString * itemRetweetedByText; 
@property (nonatomic,readonly) NSImage * itemProfileImage; 
@property (nonatomic,readonly) NSImage * itemSocialServiceImage; 
+(char)hasVariableHeight;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)_setUpSubviews;
-(double)calculatedHeightOfRow;
-(void)_setUpBindings;
-(CGRect)_profileImageButtonFrame;
-(CGRect)_socialServiceIconImageViewFrame;
-(CGRect)_displayNameTextFieldFrame;
-(CGRect)_postTextFieldFrame;
-(CGRect)_retweetedByTextFieldFrame;
-(double)_textLeadingMargin;
-(double)_textTrailingMargin;
-(NSString *)itemRetweetedByText;
-(id)_sharedLinksItem;
-(void)_notifyTableViewThatOurHeightMayHaveChanged;
-(id)_makeLabelTextField;
-(void)profileImageButtonClicked:(id)arg1 ;
-(NSString *)itemDisplayName;
-(NSImage *)itemProfileImage;
-(NSImage *)itemSocialServiceImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layout;
@end


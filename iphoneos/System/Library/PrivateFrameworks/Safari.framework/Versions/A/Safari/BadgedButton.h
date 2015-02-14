/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/ButtonWithMenu.h>

@class BadgeView, NSString;

@interface BadgedButton : ButtonWithMenu {

	BadgeView* _badgeView;
	CGSize _badgeOutset;

}

@property (assign,nonatomic) CGSize badgeOutset;              //@synthesize badgeOutset=_badgeOutset - In the implementation block
@property (nonatomic,copy) NSString * badgeText; 
-(NSString *)badgeText;
-(void)_updateMaxWidth;
-(void)_updateBadge;
-(void)setBadgeOutset:(CGSize)arg1 ;
-(void)setBadgeText:(NSString *)arg1 ;
-(CGSize)badgeOutset;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewDidMoveToSuperview;
@end


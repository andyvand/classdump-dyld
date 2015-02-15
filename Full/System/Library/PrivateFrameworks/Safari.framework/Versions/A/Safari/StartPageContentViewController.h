/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class StartPageViewController, NSString, NSView;


@protocol StartPageContentViewController <NSObject>
@property (assign,nonatomic,__weak) StartPageViewController * startPageViewController; 
@property (nonatomic,readonly) NSString * pageTitle; 
@property (nonatomic,retain) NSView * externalCenteringView; 
@property (nonatomic,readonly) NSView * titleView; 
@required
+(id)defaultPageTitle;
-(NSString *)pageTitle;
-(NSView *)externalCenteringView;
-(void)setExternalCenteringView:(id)arg1;
-(NSView *)titleView;
-(StartPageViewController *)startPageViewController;
-(void)setStartPageViewController:(id)arg1;

@end


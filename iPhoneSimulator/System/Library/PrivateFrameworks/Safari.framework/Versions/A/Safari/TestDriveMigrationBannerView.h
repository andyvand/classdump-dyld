/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSView.h>
#import <Safari/SafariDelegatingView.h>

@protocol SafariViewDelegate;
@class NSString;

@interface TestDriveMigrationBannerView : NSView <SafariDelegatingView> {

	id<SafariViewDelegate> _safariViewDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SafariViewDelegate> safariViewDelegate;              //@synthesize safariViewDelegate=_safariViewDelegate - In the implementation block
-(id<SafariViewDelegate>)safariViewDelegate;
-(void)setSafariViewDelegate:(id<SafariViewDelegate>)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
@end


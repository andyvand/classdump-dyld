/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QLDisplayBundle.h>
#import <QuickLook/QLGenericViewDelegate.h>

@class QLGenericView, NSError;

@interface QLGenericDisplayBundle : QLDisplayBundle <QLGenericViewDelegate> {

	QLGenericView* _airplayView;
	NSError* _error;

}

@property (retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)setError:(id)arg1 ;
-(void)loadWithHints:(id)arg1 ;
-(id)airplayView;
-(void)setupAirPlayView;
-(void)discardAirPlayView;
-(void)genericViewDidClickOnArchiveButton:(id)arg1 ;
-(void)_loadPreviewItemInfos;
-(void)dealloc;
-(void)loadView;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)error;
@end

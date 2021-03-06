/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <ViewBridge/NSViewService.h>

@class NSResponder;

@interface NCWidgetViewService : NSViewService {

	BOOL _initailClientUpdateComplete;

}

@property (readonly) BOOL initailClientUpdateComplete;              //@synthesize initailClientUpdateComplete=_initailClientUpdateComplete - In the implementation block
@property (readonly) NSResponder * exitResponder; 
-(NSResponder *)exitResponder;
-(BOOL)initailClientUpdateComplete;
-(char)remoteViewSizeChanged:(CGSize)arg1 transaction:(id)arg2 ;
-(unsigned long long)awakeFromRemoteView;
-(void)invalidate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end


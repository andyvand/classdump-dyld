/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ViewBridge/NSViewService.h>

@class NSWindow, NSString, NSViewServiceMarshal, NSSet;

@interface NSRendezvousWindowController : NSViewService {

	NSWindow* _window;
	NSString* _identifier;
	NSViewServiceMarshal* _parentViewServiceMarshal;
	NSSet* _bridgeKeys;

}

@property (readonly) NSWindow * window;                  //@synthesize window=_window - In the implementation block
@property (readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)controllerForWindow:(id)arg1 ;
+(id)controllerForIdentifier:(id)arg1 ;
+(id)bridgeKeysForWindowBase:(unsigned char)arg1 ;
+(void)addBridgeKeys:(id)arg1 ;
+(id)bridgeKeys;
-(unsigned long long)acceptableStyleMask;
-(unsigned char)inclusiveLayerBackOverride;
-(unsigned long long)awakeFromRemoteView;
-(id)initWithWindow:(id)arg1 parentViewServiceMarshal:(id)arg2 ;
-(void)releaseIvars;
-(id)objectToObserveForKey:(id)arg1 withWindow:(id)arg2 ;
-(id)effectiveParentViewServiceMarshal;
-(void)dealloc;
-(void)invalidate;
-(NSWindow *)window;
-(NSString *)identifier;
-(void)loadView;
@end


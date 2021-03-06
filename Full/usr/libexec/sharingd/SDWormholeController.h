/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SDWormholeControllerDelegate;
@class SDStatusMonitor, NSMutableDictionary;

@interface SDWormholeController : NSObject {

	char _started;
	SDStatusMonitor* _monitor;
	NSMutableDictionary* _properties;
	id<SDWormholeControllerDelegate> _delegate;

}

@property (__weak) id<SDWormholeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)somethingChanged:(id)arg1 ;
-(void)configureSettingsForAirDrop;
-(void)setStatusAndNotify;
-(void)addObservers;
-(void)removeObservers;
-(id)init;
-(void)setDelegate:(id<SDWormholeControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(id<SDWormholeControllerDelegate>)delegate;
-(void)setProperty:(void*)arg1 forKey:(id)arg2 ;
@end


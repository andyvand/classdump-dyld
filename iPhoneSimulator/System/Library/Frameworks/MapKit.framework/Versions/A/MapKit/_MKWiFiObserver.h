/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _MKWiFiObserverDelegate;
#import <MapKit/MapKit-Structs.h>
@interface _MKWiFiObserver : NSObject {

	SCDynamicStoreRef _airportDynamicStore;
	char _wifiEnabled;
	id<_MKWiFiObserverDelegate> _delegate;

}

@property (getter=isWifiEnabled,nonatomic,readonly) char wifiEnabled;                  //@synthesize wifiEnabled=_wifiEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<_MKWiFiObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(char)isWifiEnabled;
-(void)_updateWiFiState:(char)arg1 ;
-(id)init;
-(void)setDelegate:(id<_MKWiFiObserverDelegate>)arg1 ;
-(id<_MKWiFiObserverDelegate>)delegate;
@end


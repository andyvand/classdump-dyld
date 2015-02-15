/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FinderKit/FinderKit-Structs.h>
@interface FI_TPrefsObserverBridge : NSObject {

	IPrefsObserver* _observer;
	set<TString, std::__1::less<TString>, std::__1::allocator<TString> >* _globalKeysBeingObserved;
	set<UDefaults::RegistryID, std::__1::less<UDefaults::RegistryID>, std::__1::allocator<UDefaults::RegistryID> >* _regIDsBeingObserved;

}
-(void)aboutToTearDown;
-(void)stopObservingAllPrefsChanges;
-(void)finderPrefChanged:(id)arg1 ;
-(void)globalPrefChanged:(id)arg1 ;
-(void)stopObservingRegIDChanges:(int)arg1 ;
-(void)stopObservingGlobalPrefChanges:(const TString*)arg1 ;
-(void)stopObservingFinderPrefsResetNotification;
-(id)initWithObserver:(IPrefsObserver*)arg1 ;
-(void)startObservingRegIDChanges:(int)arg1 ;
-(void)startObservingGlobalPrefChanges:(const TString*)arg1 ;
-(void)startObservingFinderPrefsResetNotification;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface TUHardPauseController : NSObject {

	char _cachedValuesAreValid;
	unsigned short _state;
	unsigned short _cachedAppropriateState;
	NSString* _cachedDisplayString;

}

@property (nonatomic,readonly) NSString * displayString; 
@property (assign,nonatomic) unsigned short state;                     //@synthesize state=_state - In the implementation block
@property (retain) NSString * cachedDisplayString;                     //@synthesize cachedDisplayString=_cachedDisplayString - In the implementation block
@property (assign) char cachedValuesAreValid;                          //@synthesize cachedValuesAreValid=_cachedValuesAreValid - In the implementation block
@property (assign) unsigned short cachedAppropriateState;              //@synthesize cachedAppropriateState=_cachedAppropriateState - In the implementation block
+(id)sharedHardPauseController;
-(unsigned short)appropriateState;
-(void)setCachedValuesAreValid:(char)arg1 ;
-(char)canQueryHardPauseDigits;
-(void)sendHardPauseDigitsLocal;
-(void)sendHardPauseDigitsRelayed;
-(void)sendHardPauseDigits;
-(void)updateCachedValuesIfNecessary;
-(NSString *)cachedDisplayString;
-(unsigned short)cachedAppropriateState;
-(char)cachedValuesAreValid;
-(void)modelStateChangedNotification:(id)arg1 ;
-(void)resetCacheValidity;
-(void)setCachedDisplayString:(NSString *)arg1 ;
-(void)setCachedAppropriateState:(unsigned short)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setState:(unsigned short)arg1 ;
-(unsigned short)state;
-(NSString *)displayString;
@end


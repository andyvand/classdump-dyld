/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/System Image Utility.app/Contents/Frameworks/SIUFoundation.framework/Versions/A/SIUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUserDefaults;

@interface SIUUserDefaults : NSObject {

	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) NSUserDefaults * defaults;              //@synthesize defaults=_defaults - In the implementation block
+(id)userDefaults;
-(char)internalLoggingEnabled;
-(char)liveUpdateInstallerQuery;
-(void)registerDefaults;
-(long long)logLevel;
-(id)init;
-(void)dealloc;
-(char)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)dictionaryRepresentation;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
@end


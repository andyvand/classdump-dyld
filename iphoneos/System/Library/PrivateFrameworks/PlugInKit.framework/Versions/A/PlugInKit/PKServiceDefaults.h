/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/Versions/A/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSUserDefaults.h>

@class PKServicePersonality;

@interface PKServiceDefaults : NSUserDefaults {

	PKServicePersonality* _personality;

}

@property (__weak) PKServicePersonality * personality;              //@synthesize personality=_personality - In the implementation block
-(PKServicePersonality *)personality;
-(id)initWithPersonality:(id)arg1 ;
-(char)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setPersonality:(PKServicePersonality *)arg1 ;
@end


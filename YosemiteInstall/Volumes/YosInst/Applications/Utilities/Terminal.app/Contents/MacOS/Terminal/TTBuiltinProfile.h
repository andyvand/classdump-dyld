/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Applications/Utilities/Terminal.app/Contents/MacOS/Terminal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Terminal/Terminal-Structs.h>
#import <Terminal/TTProfile.h>

@interface TTBuiltinProfile : TTProfile
+(id)sharedBuiltinProfile;
+(id)defaultKeyMappings;
-(void)setParentProfile:(id)arg1 ;
-(void)setScopeValue:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

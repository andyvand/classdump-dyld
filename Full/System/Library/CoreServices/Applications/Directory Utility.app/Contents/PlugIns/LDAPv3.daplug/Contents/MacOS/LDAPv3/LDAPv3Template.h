/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Directory Utility.app/Contents/PlugIns/LDAPv3.daplug/Contents/MacOS/LDAPv3
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface LDAPv3Template : NSObject {

	NSMutableDictionary* _dictionary;

}
+(id)templateWithName:(id)arg1 ;
+(void)loadODMappingsAtPath:(id)arg1 ;
+(void)loadTemplatesAtPath:(id)arg1 ;
+(id)templates;
-(id)attributeTypes;
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)initWithMappingsPath:(id)arg1 ;
-(void)applyToDictionary:(id)arg1 ;
-(id)dictionary;
-(id)initWithPath:(id)arg1 ;
-(id)displayName;
-(id)localizedDisplayName;
-(id)version;
-(id)recordTypes;
@end


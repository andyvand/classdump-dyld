/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NSSQLStoreMappingGenerator : NSObject {

	NSMutableDictionary* _names;

}
+(id)defaultMappingGenerator;
+(void)invalidate;
-(id)newGeneratedPropertyName:(id)arg1 ;
-(id)uniqueNameWithBase:(id)arg1 ;
-(id)generateTableName:(id)arg1 ;
-(id)newUniqueNameWithBase:(unsigned short*)arg1 withLength:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
@end


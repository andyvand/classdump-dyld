/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSULRUCache, NSArray, NSMutableDictionary, NSMutableArray, NSString;

@interface TSWPFontCache : NSObject {

	TSULRUCache* _fontCache;
	NSArray* _familyNames;
	NSMutableDictionary* _familyDisplayNames;
	NSArray* _familyFonts;
	NSMutableArray* _cachedAvailableMembers;
	NSString* _cachedMembersFamilyName;

}
+(id)sharedCache;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(id)_singletonAlloc;
-(CTFontRef)createFontWithName:(id)arg1 size:(float)arg2 ;
-(id)displayNameForFontFamily:(id)arg1 ;
-(void)p_FontWasDownloaded:(id)arg1 ;
-(id)p_excludedFamilyNames;
-(id)sortedFontFamilies;
-(id)sortedFontFamilyEntriesForStylesheet:(id)arg1 ;
-(id)availableMembersOfFontFamily:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/mds
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <mds/mds-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSDictionary;

@interface MDSPathFilterGenerator : NSObject {

	NSMutableDictionary* _namedRoots;
	NSMutableArray* _namedRootArray;
	NSMutableDictionary* _namedRootIndexes;
	NSMutableArray* _auxValueArray;
	int _nextAuxValueIndex;
	char _processExtensions;
	int _auxValueCount;
	NSMutableDictionary* _namedLinkExtensionsDictionary;
	NSDictionary* _namedLinkPrefixesDictionary;
	unsigned long long _atBundleMask;
	unsigned long long _inBundleMask;
	unsigned long long _inheritMask;
	unsigned long long _defaultRule;
	unsigned long long _defaultMask;
	unsigned long long _ignoreMask;

}
-(id)initWithDefaultFieldsAndValues:(int*)arg1 ignoreFields:(int*)arg2 mappedPrefixes:(id)arg3 hiddenExtensions:(id)arg4 mappedExtensions:(id)arg5 ;
-(void)addNamed:(id)arg1 field:(int)arg2 value:(int)arg3 forPath:(id)arg4 permitLink:(char)arg5 ;
-(id)filterDataForMountDepth:(int)arg1 ;
-(void)addNamed:(id)arg1 auxValue:(unsigned long long)arg2 forPath:(id)arg3 ;
-(MDPlistContainerRef)copyFilterMDPlistForMountDepth:(int)arg1 ;
-(void)setAtBundleField:(unsigned)arg1 inBundleField:(unsigned)arg2 ;
-(void)addRules:(SCD_Struct_MD72*)arg1 withPrefix:(id)arg2 ;
-(void)addNamed:(id)arg1 field:(int)arg2 value:(int)arg3 hasAuxValue:(char)arg4 auxValue:(unsigned long long)arg5 forPath:(id)arg6 permitLink:(char)arg7 copyParentWildcardLink:(char)arg8 ;
-(void)addMappedExtensions:(id)arg1 ;
-(void)dealloc;
-(void)dump;
@end

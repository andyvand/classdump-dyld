/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PackageKit/PackageKit-Structs.h>
@class NSData;

@interface PKBOM : NSObject {

	NSData* _bomData;
	BOMBomRef _BOMBom;

}
+(id)_NSFileTypeFromBOMFSObjType:(int)arg1 ;
+(id)_attributesOfBOMFSObject:(BOMFSObjectRef)arg1 ;
+(char)_setAttributes:(id)arg1 ofBOMFSObject:(BOMFSObjectRef)arg2 ;
-(id)initWithBOMPath:(id)arg1 ;
-(id)initWithBOMData:(id)arg1 ;
-(BOMBomRef)BOMBom;
-(id)attributesOfItemAtPath:(id)arg1 ;
-(id)directoryEnumerator;
-(id)subpathsOfDirectoryAtPath:(id)arg1 ;
-(unsigned long long)fileCount;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)totalSize;
@end


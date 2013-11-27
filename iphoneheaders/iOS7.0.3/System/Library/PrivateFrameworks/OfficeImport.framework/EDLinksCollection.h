/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface EDLinksCollection : NSObject {

	NSMutableArray* mLinks;
	NSMutableArray* mReferences;

}
-(void)dealloc;
-(id)init;
-(void)addOrEquivalentExternalAddInName:(id)arg1 linkReferenceIndex:(unsigned*)arg2 nameIndex:(unsigned*)arg3 ;
-(unsigned)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned)arg1 lastSheetIndex:(unsigned)arg2 ;
-(bool)convertLinkReferenceIndex:(unsigned)arg1 firstSheetIndex:(unsigned*)arg2 lastSheetIndex:(unsigned*)arg3 ;
-(unsigned)addReference:(id)arg1 ;
-(unsigned)addLink:(id)arg1 ;
-(unsigned)referencesCount;
-(id)referenceAtIndex:(unsigned)arg1 ;
-(unsigned)linksCount;
-(id)linkAtIndex:(unsigned)arg1 ;
-(unsigned)addOrEquivalentLinkReferenceOfType:(int)arg1 firstSheetIndex:(unsigned)arg2 lastSheetIndex:(unsigned)arg3 ;
-(unsigned)indexOfFirstLinkWithType:(int)arg1 ;
-(unsigned)linkIndexCreateIfNeededWithType:(int)arg1 ;
-(unsigned)indexOfReference:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:23 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTOperatorNode.h>

@interface TSTPrefixOperatorNode : TSTOperatorNode
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(PrefixOperatorNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const PrefixOperatorNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS266)arg2 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/NSFastEnumeration.h>

@class NSMutableArray;

@interface RMTable : NSObject <NSFastEnumeration> {

	NSMutableArray* _matrix;
	unsigned long long _elementCount;
	NSMutableArray* _rowFirstElements;
	NSMutableArray* _columnFirstElements;
	CGPDFLayoutRef _layout;
	CGPDFNodeRef _tableRoot;
	char _rowOrder;

}

@property (readonly) CGPDFPageRef page; 
@property (assign) char rowOrder;                    //@synthesize rowOrder=_rowOrder - In the implementation block
-(id)initWithRoot:(CGPDFNodeRef)arg1 layout:(CGPDFLayoutRef)arg2 ;
-(void)setRowOrder:(char)arg1 ;
-(char)rowOrder;
-(void)matrixDealloc;
-(unsigned long long)rows;
-(id)rowAtIndex:(unsigned long long)arg1 ;
-(id)columnAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)columns;
-(void)dealloc;
-(CGRect)bounds;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RM23*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(CGPDFLayoutRef)layout;
-(CGPDFPageRef)page;
-(void)dump;
@end

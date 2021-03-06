/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WhitePages.framework/Versions/A/WhitePages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class QuickLiteCursor;

@interface QuickLiteRow : NSObject {

	QuickLiteCursor* QL_quickLiteCursor;
	unsigned long long QL_rowIndex;

}
-(id)cursor;
-(id)QLP_initWithCursor:(id)arg1 withRow:(unsigned long long)arg2 ;
-(char)setValue:(id)arg1 forColumn:(id)arg2 ;
-(id)stringForColumn:(id)arg1 ;
-(id)valueForColumn:(id)arg1 ;
-(char)boolValueForColumn:(id)arg1 ;
-(long long)intValueForColumn:(id)arg1 ;
-(long long)longLongValueForColumn:(id)arg1 ;
-(double)doubleValueForColumn:(id)arg1 ;
-(const char*)textValueForColumn:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)values;
-(unsigned long long)index;
@end


/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMProperty.h>

@interface CMLengthProperty : CMProperty {

	double value;
	int unitType;

}
+(id)cssStringValue:(double)arg1 unit:(int)arg2 ;
-(int)intValue;
-(double)value;
-(id)initWithNumber:(double)arg1 unit:(int)arg2 ;
-(int)unitType;
-(id)cssStringForName:(id)arg1 ;
-(id)cssString;
-(id)initWithNumber:(double)arg1 ;
-(int)compareValue:(id)arg1 ;
@end

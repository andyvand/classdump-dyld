/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WhitePages.framework/Versions/A/WhitePages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABMultiValue, WPODRecord, NSString, NSArray;

@interface WPMultiValue : NSObject {

	ABMultiValue* _abMultiValue;
	WPODRecord* _wpODRecord;
	id _mappedProperty;
	NSString* _property;
	NSString* _prefix;
	NSArray* _odLabels;
	NSArray* _values;

}
+(id)wpMultiValueWithABMultiValue:(id)arg1 forProperty:(id)arg2 ;
+(id)wpMultiValueWithODRecord:(id)arg1 forProperty:(id)arg2 ;
+(id)wpMultiValue:(id)arg1 withoutPrefix:(id)arg2 ;
+(id)wpMultiValueWithLabels:(id)arg1 values:(id)arg2 ;
-(id)property;
-(id)prefix;
-(id)valuesForLabel:(id)arg1 ;
-(id)initWPMultiValueWithABMultiValue:(id)arg1 forProperty:(id)arg2 ;
-(id)initWPMultiValueWithODRecord:(id)arg1 forProperty:(id)arg2 ;
-(id)initWPMultiValueWithMultivalue:(id)arg1 withoutPrefix:(id)arg2 ;
-(id)odRecord;
-(id)mappedProperty;
-(id)odLabels;
-(id)initWPMultiValueWithLabels:(id)arg1 values:(id)arg2 ;
-(id)allLabels;
-(id)allValuesWithPrefix;
-(void)setValues:(id)arg1 forLabel:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)allValues;
@end


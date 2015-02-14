/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WhitePages.framework/Versions/A/WhitePages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WPSession, NSMutableDictionary;

@interface WPGenericRecord : NSObject {

	WPSession* _session;
	NSMutableDictionary* _updatedValues;

}
+(id)recordWithSession:(id)arg1 ;
-(id)recordType;
-(id)updatedValues;
-(id)initRecordWithSession:(id)arg1 ;
-(id)singularRecordCategory;
-(id)pluralRecordCategory;
-(id)singleValueForProperty:(id)arg1 ;
-(id)multiValueForProperty:(id)arg1 ;
-(id)valuesWithPrefix:(id)arg1 forProperty:(id)arg2 ;
-(id)valueForProperty:(id)arg1 returnMultiValueIfSingleValue:(char)arg2 ;
-(char)setValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(char)isDirty;
-(id)valueForProperty:(id)arg1 ;
-(void)reset;
-(id)session;
@end


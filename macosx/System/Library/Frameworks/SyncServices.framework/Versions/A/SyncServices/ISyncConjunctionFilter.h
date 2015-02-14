/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/ISyncFiltering.h>

@class NSArray;

@interface ISyncConjunctionFilter : NSObject <ISyncFiltering> {

	NSArray* _filters;
	NSArray* _supportedEntityNames;
	char _isAndConjunction;
	char _shouldApplyUnsupportedRecords;
	char _ignoreLocals;

}
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)supportedEntityNames;
-(char)shouldApplyRecord:(id)arg1 withRecordIdentifier:(id)arg2 ;
-(id)initWithFilters:(id)arg1 isAndConjunction:(char)arg2 shouldApplyUnsupportedRecords:(char)arg3 ignoreLocalRecords:(char)arg4 ;
-(void)_computeSupportedEntityNames;
-(id)initWithFilters:(id)arg1 isAndConjunction:(char)arg2 shouldApplyUnsupportedRecords:(char)arg3 ;
@end


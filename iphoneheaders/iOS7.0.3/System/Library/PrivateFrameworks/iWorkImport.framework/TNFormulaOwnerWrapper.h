/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TNFormulaOwnerWrapper : NSObject <NSCopying> {

	CFUUIDRef mOwner;

}

@property (readonly) CFUUIDRef ownerID; 
-(id)initWithTSCEFormulaOwnerID:(CFUUIDRef)arg1 ;
-(BOOL)isEqualToTNFormulaOwnerWrapper:(id)arg1 ;
-(CFUUIDRef)ownerID;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSecureCoding.h>

@class NSString;

@interface NSGenerationToken : NSObject <NSSecureCoding> {

	long long _origin;
	long long _generation;
	NSString* _storeIdentifier;

}
+(char)supportsSecureCoding;
-(long long)generation;
-(id)initForStore:(id)arg1 origin:(long long)arg2 generation:(long long)arg3 ;
-(id)storeIdentifier;
-(id)initWithStoreIdentifier:(id)arg1 origin:(long long)arg2 generation:(long long)arg3 ;
-(char)isReferencingStore:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(long long)origin;
@end


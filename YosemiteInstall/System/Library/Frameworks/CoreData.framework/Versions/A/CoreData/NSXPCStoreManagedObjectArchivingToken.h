/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSCoding.h>
#import <CoreData/NSSecureCoding.h>

@class NSURL;

@interface NSXPCStoreManagedObjectArchivingToken : NSObject <NSCoding, NSSecureCoding> {

	NSURL* _managedObjectReferenceURI;

}
+(char)supportsSecureCoding;
-(id)initWithURI:(id)arg1 ;
-(id)URI;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
@end

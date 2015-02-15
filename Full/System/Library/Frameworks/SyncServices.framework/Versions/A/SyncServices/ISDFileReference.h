/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/ISDDataObject.h>
#import <SyncServices/NSCoding.h>

@class NSString, NSDate, NSData;

@interface ISDFileReference : ISDDataObject <NSCoding> {

	NSString* _persistentId;
	NSString* _path;
	NSDate* _timestamp;
	NSData* _aliasData;
	NSString* _bundleId;
	NSString* _bundleRelativePath;
	NSString* _windowsBinRelativePath;

}
+(void)initialize;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)timestamp;
-(id)initWithPath:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithPath:(id)arg1 bundleId:(id)arg2 bundleRelativePath:(id)arg3 windowsBinRelativePath:(id)arg4 ;
-(char)refersToFileAtPath:(id)arg1 ;
-(char)fileHasBeenModified;
-(char)validateFileReference;
-(void)updateTimestamp;
-(id)initWithPath:(id)arg1 bundleId:(id)arg2 bundleRelativePath:(id)arg3 ;
-(id)persistentId;
-(id)aliasData;
-(id)bundleId;
-(id)bundleRelativePath;
-(id)windowsBinRelativePath;
@end


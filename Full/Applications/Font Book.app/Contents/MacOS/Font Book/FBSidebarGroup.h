/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Font Book/Font Book-Structs.h>
#import <Font Book/NSCopying.h>
#import <Font Book/NSCoding.h>

@class NSString;

@interface FBSidebarGroup : NSObject <NSCopying, NSCoding> {

	NSString* name;

}

@property (readonly) NSString * name; 
+(id)sidebarGroups;
+(id)groupWithName:(id)arg1 ;
-(id)faces;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)displayName;
-(id)children;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Font Book/FBDomain.h>

@class NSArray;

@interface FBLockedFontDomain : FBDomain {

	NSArray* lockedContainers;

}
+(id)lockedFontDomain;
-(long long)domainRef;
-(id)lockedContainers;
-(char)urlIsLocked:(id)arg1 ;
-(void)setLockedContainers:(id)arg1 ;
-(id)path;
-(id)image;
-(id)alternateImage;
-(long long)order;
-(id)folder;
-(unsigned)flags;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OSAKit/OSAKit-Structs.h>
@interface OSAComponentInstance : NSObject {

	ComponentInstanceRecord* componentInstance;

}

@property (readonly) ComponentInstanceRecord* componentInstance; 
+(id)newWithComponentInstance:(ComponentInstanceRecord*)arg1 ;
-(ComponentInstanceRecord*)componentInstance;
-(id)initWithComponentInstance:(ComponentInstanceRecord*)arg1 ;
-(void)finalize;
-(void)dealloc;
@end


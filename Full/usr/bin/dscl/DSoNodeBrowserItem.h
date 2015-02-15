/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/dscl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DSoDirectory, NSString, DSoNode, NSMutableArray;

@interface DSoNodeBrowserItem : NSObject {

	DSoDirectory* _dir;
	NSString* _path;
	char useNode;
	DSoNode* _node;
	NSMutableArray* _children;

}
-(id)initWithName:(id)arg1 directory:(id)arg2 ;
-(id)registeredChildrenPaths;
-(id)initWithPath:(id)arg1 directory:(id)arg2 ;
-(char)loadedChildren;
-(int)compareNames:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)path;
-(id)name;
-(id)node;
-(id)childWithName:(id)arg1 ;
-(id)children;
-(char)hasChildren;
@end

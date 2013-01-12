//
//  PDFView.h
//
//  Created by Nigel Barber on 15/10/2011.
//  Copyright 2011 Mindbrix Limited. All rights reserved.
//

#import <UIKit/UIKit.h>

////////////////////////////////////////////////////////////////////////////////
//  ARC Helper
//
//  Version 2.1
//
//  Created by Nick Lockwood on 05/01/2012.
//  Copyright 2012 Charcoal Design
//
//  Distributed under the permissive zlib license
//  Get the latest version from here:
//
//  https://gist.github.com/1563325
//

#ifndef ah_retain
#if __has_feature(objc_arc)
#define ah_retain self
#define ah_dealloc self
#define release self
#define autorelease self
#else
#define ah_retain retain
#define ah_dealloc dealloc
#define __bridge
#endif
#endif

//  ARC Helper ends


@interface PDFView : UIView 
{

}

@property( nonatomic, assign ) int page;
@property( nonatomic, assign ) NSString *resourceName;
@property( nonatomic, assign ) NSURL *resourceURL;

+(CGRect) mediaRect:(NSString *)resourceName;
+(CGRect) mediaRectForURL:(NSURL *)resourceURL;
+(CGRect) mediaRectForURL:(NSURL *)resourceURL atPage:(int)page;
+(int) pageCountForURL:(NSURL *)resourceURL;
+(NSURL *)resourceURLForName:(NSString *)resourceName;
  
@end

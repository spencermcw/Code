//
//  AlbumImagesCollectionViewViewController.h
//  theCHIVE
//
//  Created by Spencer McWilliams on 5/9/13.
//  Copyright (c) 2013 Spencer McWilliams. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Album.h"

@interface AlbumImagesCollectionViewController : UICollectionViewController
@property (nonatomic, strong) Album *album;
@end

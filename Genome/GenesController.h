//
//  MasterViewController.h
//  Genome
//
//  Created by HaseltiF on 2/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ChromosomeMapController;

@interface GenesController : UITableViewController

@property (strong, nonatomic) ChromosomeMapController *detailViewController;

@end
